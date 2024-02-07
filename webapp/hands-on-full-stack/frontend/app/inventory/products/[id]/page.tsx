'use client';

import { useForm } from "react-hook-form";
import { useState, useEffect } from 'react';
import productsData from "../sample/dummy_products.json";
import inventoriesData from "../sample/dummy_inventories.json";

type ProductData = {
    id: number;
    name: string;
    price: number;
    description: string;
}

type FormData = {
  id: number;
  quantity: number;
}

type InventoryData = {
    id: number;
    type: string;
    date: string;
    unit: number;
    quantity: number;
    price: number;
    inventory: number;
}

export default function Page({ params }: { params: { id: number }, }) {
  const {
    register,
    handleSubmit,
    formState: { errors },
  } = useForm();

  const [product, setProduct] = useState<ProductData>({ id: 0, name: "", price: 0, description: "" });
  const [data, setData] = useState<Array<InventoryData>>([]);
  const [action, setAction] = useState<string>("");

  const onSubmit = (event: any): void => {
    const data: FormData = {
      id: params.id,
      quantity: event.quantity,
    };

    if (action === "purchase") {
      if (data.id === null) {
        return;
      }
      handlePurchase(data);
    } else if (action === "sell") {
      if (data.id === null) {
        return;
      }
      handleSell(data);
    }
  };

  const handlePurchase = (data: FormData) => {
      console.log('商品を仕入れました');
  };

  const handleSell = (data: FormData) => {
      console.log('商品を卸しました');
  };

  useEffect(() => {
    const selectedProduct: ProductData = productsData.find(v => v.id == params.id)?? {
      id: 0,
      name: "",
      price: 0,
      description: "",
    };
    setProduct(selectedProduct);
    setData(inventoriesData);
  }, []);

  return (
    <>
        <h2>商品在庫管理</h2>
        <h3>在庫処理</h3>
        <form onSubmit={handleSubmit(onSubmit)}>
            <div>
                <label>商品名:</label>
                <span>{product.name}</span>
            </div>
            <div>
                <label>数量:</label>
                <input type="number" id="quantity" {...register("quantity", { required: true, min: 1, max: 99999999 })} />
                {errors.quantity && (
                    <div>1 から 99999999 の数値を入力してください</div>
                )}
            </div>
            <button onClick={() => setAction("purchase")}>商品を仕入れる</button>
            <button onClick={() => setAction("sell")}>商品を卸す</button>
        </form>
        <h3>在庫処理</h3>
        <table>
            <thead>
                <tr>
                    <th>処理種別</th>
                    <th>処理日時</th>
                    <th>単価</th>
                    <th>数量</th>
                    <th>価格</th>
                    <th>在庫数</th>
                </tr>
            </thead>
            <tbody>
                {data.map((data: InventoryData) => (
                    <tr key={data.id}>
                        <td>{data.type}</td>
                        <td>{data.date}</td>
                        <td>{data.unit}</td>
                        <td>{data.quantity}</td>
                        <td>{data.price}</td>
                        <td>{data.inventory}</td>
                    </tr>
                ))}
            </tbody>
        </table>
    </>
  )
}

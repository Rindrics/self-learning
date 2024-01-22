'use client'

import { useState, useEffect } from 'react';
import productsData from "./sample/dummy_products.json";

type ProductData = {
  id: number;
  name: string;
  price: number;
  description: string;
};

export default function Page() {
  const [data, setData] = useState<Array<ProductData>>([])

  useEffect(() => {
    setData(productsData)
  }, [])

  return (
    <>
        <h2>商品一覧</h2>
        <button>商品を追加する</button>
        <table>
            <thead>
                <tr>
                    <th>商品 ID</th>
                    <th>商品名</th>
                    <th>単価</th>
                    <th>説明</th>
                    <th></th>
                </tr>
            </thead>
            <tbody>
                {data.map((data: any) => (
                 <tr key={data.id}>
                   <td>{data.id}</td>
                   <td>{data.name}</td>
                   <td>{data.price}</td>
                   <td>{data.description}</td>
                   <td>
                       <button>更新・削除</button>
                   </td>
                 </tr>
                ))}
            </tbody>
        </table>
    </>
  )
}
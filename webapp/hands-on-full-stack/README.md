## playing with full-stack web app

- frontend: React
- backend: Django API

### components & pages

- [ ] header
- [ ] sidebar
- [ ] login page `https://localhost:3000/login`
- [ ] inventory list page `https://localhost:3000/inventory/product`
- [ ] inventory page `https://localhost:3000/inventory/product/[id]`
- [ ] bulk sales registration page `https://localhost:3000/inventory/import_sales`

### APIs

| API                        | Method | URL                                                   |
|:---------------------------|:-------|:------------------------------------------------------|
| login                      | POST   | http://localhost:8000/api/inventory/login/            |
| refresh                    | POST   | http://localhost:8000/api/inventory/retry/            |
| logout                     | POST   | http://localhost:8000/api/inventory/logout/           |
| see product list           | GET    | http://localhost:8000/api/inventory/products/         |
| see a product              | GET    | http://localhost:8000/api/inventory/products/[id]     |
| register product           | POST   | http://localhost:8000/api/inventory/products/         |
| update product             | PUT    | http://localhost:8000/api/inventory/products/[id]     |
| delete product             | DELETE | http://localhost:8000/api/inventory/products/[id]     |
| register purchase          | POST   | http://localhost:8000/api/inventory/purchases/        |
| register sales             | POST   | http://localhost:8000/api/inventory/sales             |
| see inventory              | POST   | http://localhost:8000/api/inventory/inventories/      |
| register inventory [sync]  | POST   | http://localhost:8000/api/inventory/sync/             |
| register inventory [async] | POST   | http://localhost:8000/api/inventory/async/            |
| see sales summary          | POST   | http://localhost:8000/api/inventory/inventory/summary |

## how to start local env

frontend:
```bash
yarn dev
```

backend:
```bash
python manage.py runserver --settings config.settings.development
```

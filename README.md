
## 🏃 Usage
[Create a workflow](https://help.github.com/en/articles/configuring-a-workflow#creating-a-workflow-file) (eg: [`.github/workflows/run.yml`](.github/workflows/usage.yaml))

### Default Workflow
```yml
name: "Find Largest Prime Number"
on:
  workflow_dispatch:

jobs:
  run:
    runs-on: ubuntu-latest
    steps:
      - uses: austenstone/action-c@main
        with:
          number: 1000
```

## ➡️ Input Settings
Various inputs are defined in [`action.yml`](action.yml):

| Name | Description | Default |
| --- | - | - |
| **number** | Number to find the largest prime factor of. | N/A |

## Further help
To get more help on the Actions see [documentation](https://docs.github.com/en/actions).

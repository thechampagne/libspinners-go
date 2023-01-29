# libspinners-go

[![](https://img.shields.io/github/v/tag/thechampagne/libspinners-go?label=version)](https://github.com/thechampagne/libspinners-go/releases/latest) [![](https://img.shields.io/github/license/thechampagne/libspinners-go)](https://github.com/thechampagne/libspinners-go/blob/main/LICENSE)

Go binding for **libspinners** an elegant terminal spinners.

### Example

```go
func main() {
	spin := spinner.New(spinner.Dots9, "Waiting for 3 seconds")
	defer spin.Clean()
	time.Sleep(3 * time.Second)
	spin.Stop()
}
```

### References
 - [libspinners](https://github.com/thechampagne/libspinners)

### License

This repo is released under the [MIT](https://github.com/thechampagne/libspinners-go/blob/main/LICENSE).

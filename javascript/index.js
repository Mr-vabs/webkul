const createPattern = size =>
    Array(size + 2)
        .fill(1)
        .map((_, i) => {
            const str = Array(size).fill(" ".repeat(size));
            str[i - 1] = "@".repeat(size);
            return "*" + (i === 0 || i === size + 1 ? " ".repeat(size * size) : str.join("")) + "*";
        })
        .join("\n");

console.log(createPattern(5));

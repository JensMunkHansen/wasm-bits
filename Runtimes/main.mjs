async function loadModule(modulePath, moduleName) {
  // Dynamic import for both browser and Node.js
  const module = await import(modulePath);
  return module.default();
}
// Works in browser if compiled using Makefile
async function main() {
  try {
    const instance1 = await loadModule('./Module1.js', 'Module1');
    const instance2 = await loadModule('./Module2.js', 'Module2');

    // Example usage of both instances
    const a = 3, b = 4;

    const sum = instance1._add(a, b);
    console.log(`Result from module1 (add): ${a} + ${b} = ${sum}`);

    const product = instance2._multiply(a, b);
    console.log(`Result from module2 (multiply): ${a} * ${b} = ${product}`);
  } catch (err) {
    console.error('Error loading modules:', err);
  }
}

main();

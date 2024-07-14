// Import the generated JavaScript files for both modules
import Module1 from './module1.js';
import Module2 from './module2.js';

// Initialize Module1
Module1().then(instance1 => {
  // Use instance1 here, e.g., instance1._add();
  
  // Initialize Module2 after Module1 is ready
  Module2().then(instance2 => {
    // Use instance2 here, e.g., instance2._multiply();
    
    // Example usage of both instances
    const a = 3, b = 4;
    
    const sum = instance1._add(a, b);
    console.log(`Result from module1 (add): ${a} + ${b} = ${sum}`);

    const product = instance2._multiply(a, b);
    console.log(`Result from module2 (multiply): ${a} * ${b} = ${product}`);
  });
});

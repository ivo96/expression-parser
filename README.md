# Expression Parser

Top down parser for parsing complex expressions into expression tree.

## Following operators allowed

  * Numbers - Int only!(for now)
  * Normal Operators - +, -, *, /
  * If/Else - if('value' <|>|= 'value', 'whenTrue', 'whenFalse')
  * Braces - ()
  * Log - log(number, base)
  * Natural Logarithm - ln(number)

### Example expression

```
98+if(log(56*3,32) > 98, 845*32,ln(37))
```

### Prerequisites

You need to have g++ installed. 

### Installing

Clone repo

```
https://github.com/ivo96/expression-parser.git
```

Change permissions

```
chmod +x ./compile.bash
```

Compile

```
./compile.bash
```

Run the executable

```
./bin/calculator  
```

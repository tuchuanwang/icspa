# [regular expression](https://regexone.com/)

## 0 letter

## 1 Digits
	\d :Any Digit
	\D :Any Non-digit character

## 2 wlidcard-dot
	.  :Any Character
	\. :Period (\:转义符号)

## 3 match specific characters  
	[]  :exp:[abc] will only match a single a, b, or c letter and nothing else.

## 4 excluding specific characters
	[^] :exp[]^abc] will match any single character except for the letters a, b, or c.

## 5 character ranges  dash: -
	[a-z]: characters a to z
	[0-9]: numbers 0 to 9
	\w: any alphanumeric character
	\W: ant non-alphanumeric character

## 6 catching some zzz's
	{m}  : m repetitions
	{n,m}: n to m repertions

## 7 mr. kleene
	\* : zero to more repetitions
	\+  : one or more repetitions

## 8 characters optional
	? ;optional character  (zero or one)

## 9 all this whitespace
	\t : table
	\n : new line
	\r : return
	() : whitespace
	\s : above type

## 10 staring and ending
	^ : start
	$ : end
    exp: ^nihao.* world$

## 11 match groups
	() : capture groups

## 12 nested groups
    (()): nested groups 嵌套组

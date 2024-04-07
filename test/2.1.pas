program testprocandfunc;

var
  a, b: integer;


procedure testpro1;
begin
  writeln(2023);
end;


procedure testpro2(n: integer);
begin
  writeln(n + 1);
end;


procedure swap(var x, y: integer);
var
  temp: integer;
begin
  temp := x;
  x := y;
  y := temp;
end;


function testfunc: integer;
begin

  testFunc := 54;
 
end;


function gcd(a, b: integer): integer;
begin
  if b = 0 then gcd := a
  else gcd := gcd(b, a mod b);
end;

begin
 
  testpro1;
  testpro2(2022);
  
 
  a := testfunc;
  b := 24;

  swap(a, b);

end.
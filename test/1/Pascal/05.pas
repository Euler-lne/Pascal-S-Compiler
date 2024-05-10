program TestProcAndFunc;

var
  a, b: integer;

// 无参过程
procedure testPro1;
begin
  write(2023);
end;

// 有参（传值）过程
procedure testPro2(n: integer);
begin
  write(n + 1);
end;

// 有参（传引用）过程
procedure swap(var x, y: integer);
var
  temp: integer;
begin
  temp := x;
  x := y;
  y := temp;
end;

// 无参函数
function testFunc: integer;
begin
  write('before testFunc := 54');
  testFunc := 54;
  write('after testFunc := 54');
end;

// 有参（传值）递归函数
function gcd(a, b: integer): integer;
begin
  if b = 0 then gcd := a
  else gcd := gcd(b, a mod b);
end;

begin
  write('procedure-test');
  testPro1;
  testPro2(2022);
  
  write();
  write('function-test');  
  a := testFunc();
  b := 24;
  write(gcd(a, b) + 1);
  swap(a, b);
  write(a, ' ', b);
end.
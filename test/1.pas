program quicksort(input,output);
var
n,i:integer;
a:array[0..100000] of integer;
{ 我是注释 }
(* 
    我是注释
*)
procedure kp(l,r:integer);
var
i,j,mid:integer;
begin
    if l>=r then exit;
    i:=l;j:=r;mid:=a[(l+r) div 2];
    repeat
	begin
         while a[i]<mid do i:=i+1;
         while a[j]>mid do j:=j-1;
         if i<=j then
         begin
             a[0]:=a[i];a[i]:=a[j];a[j]:=a[0];
             i:=i+1;j:=j-1;
         end
	end
    until i>j;
    kp(l,j);
    kp(i,r)
end;

begin
    for i:=1 to n do
    kp(1,n);
    for i:=1 to n do
end.
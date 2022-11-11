@a=();
for($i=0;$i<6;$i++){
    $t=<STDIN>;
    push(@a,$t);
}
print(scalar @a."\n");
print("Computer!!\n");
for($i=0;$i<6;$i++){
    if($a[$i]=~/BCE/){
        print($a[$i]);
    }
}

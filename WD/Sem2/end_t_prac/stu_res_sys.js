function res(){
    let m1=Number(document.getElementById("s1").value);
    let m2=Number(document.getElementById("s2").value);
    let m3=Number(document.getElementById("s3").value);
    let m4=Number(document.getElementById("s4").value);
    let m5=Number(document.getElementById("s5").value);
    let per=(m1+m2+m3+m4+m5)/5;
    let grade;
    if(per>=80)
        grade="first class";
    else if(per>=60)
        grade="second class";
    else
        grade="fail";

    document.getElementById("output").innerHTML=grade;
}
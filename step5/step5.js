function setup(){//設定只做1次
  createCanvas(400, 200);
}
function draw(){//畫圖，每秒60frame
  let s = second();//0~59秒
  if( s%2==0 ){
    background(255, 255, 255);
  }
  else{
    background(164, 164, 81);
  }
}

#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/ASCII_Sprite.h"
#include "/home/codeleaded/System/Static/Library/RLCamera.h"


ASCII_Sprite asp;
RLCamera rlc;
ORLCamera orlc;

void Setup(AlxWindow* w){
    ResizeAlxFont(16,16);

	asp = ASCII_Sprite_Null();
	//sp = ASCII_Sprite_Load("./assets/Physik." ASCII_SPRITE_TYPE);
    
    rlc = RLCamera_New(RLCAMERA_DEVICE,RLCAMERA_WIDTH * 2,RLCAMERA_HEIGHT * 2);
    orlc = ORLCamera_New("/dev/video10",GetWidth(),GetHeight());
}
void Update(AlxWindow* w){

    Sprite sp = Sprite_Null();
    sp.img = RLCamera_Get(&rlc,&sp.w,&sp.h);
    
    Clear(BLACK);

    if(sp.img){
        //Sprite_Render(WINDOW_STD_ARGS,&sp,0.0f,0.0f);
        //Sprite_Free(&sp);

        ASCII_Sprite_Free(&asp);
        asp = ASCII_Sprite_BySprite(&sp,12,12);
        ASCII_Sprite_Render(WINDOW_STD_ARGS,GetAlxFont(),&asp,0.0f,0.0f,GREEN);
        Sprite_Free(&sp);
    }
    
    ORLCamera_Set(&orlc,window.Buffer,window.Width,window.Height);
}
void Delete(AlxWindow* w){
    ASCII_Sprite_Free(&asp);
    RLCamera_Free(&rlc);
    ORLCamera_Free(&orlc);
}

int main(){
    if(Create("ASCII Sprite Renderer",1750,1350,1,1,Setup,Update,Delete))
        Start();
    return 0;
}
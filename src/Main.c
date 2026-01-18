#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/ASCII_Sprite.h"


ASCII_Sprite sp;

void Setup(AlxWindow* w){
    ResizeAlxFont(16,16);

	sp = ASCII_Sprite_LoadBySprite("./assets/Background.png",16,16);
	//sp = ASCII_Sprite_Load("./assets/Physik." ASCII_SPRITE_TYPE);
}
void Update(AlxWindow* w){
	
    Clear(BLACK);
    
    ASCII_Sprite_Render(WINDOW_STD_ARGS,GetAlxFont(),&sp,0.0f,0.0f,GREEN);
}
void Delete(AlxWindow* w){
    ASCII_Sprite_Save(&sp,"./assets/Background." ASCII_SPRITE_TYPE);
    ASCII_Sprite_Free(&sp);
}

int main(){
    if(Create("ASCII Sprite Renderer",1300,1300,1,1,Setup,Update,Delete))
        Start();
    return 0;
}
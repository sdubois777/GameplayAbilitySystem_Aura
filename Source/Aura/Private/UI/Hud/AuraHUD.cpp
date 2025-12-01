// Copyright me


#include "UI/Hud/AuraHUD.h"

void AAuraHUD::BeginPlay()
{
	Super::BeginPlay();
	
	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	Widget->AddToViewport();
}

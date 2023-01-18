// ScriptStruct /Script/FortniteGame.CanInteractResult
// Size: 0x1c
struct FCanInteractResult
{
	struct TWeakObjectPtr<class AFortPlayerPawn> RequestingPawn; // 0x0 (0x8)
	struct TWeakObjectPtr<class AFortPlayerController> RequestingPlayerController; // 0x8 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> InteractComponent; // 0x10 (0x8)
	unsigned char padding_18[0x4]; // 0x18 (0x4)
};


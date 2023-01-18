// ScriptStruct /Script/FortniteGame.InteractionType
// Size: 0x48
struct FInteractionType
{
	struct TEnumAsByte<TInteractionType> InteractionType; // 0x0 (0x1)
	struct TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct TWeakObjectPtr<class AFortPlayerPawn> RequestingPawn; // 0x4 (0x8)
	struct TWeakObjectPtr<class AFortPlayerController> RequestingPlayerController; // 0xc (0x8)
	unsigned char unreflected_14[0x8]; // 0x14 (0x8) 
	struct TWeakObjectPtr<class UPrimitiveComponent> InteractComponent; // 0x1c (0x8)
	struct TWeakObjectPtr<class UObject> OptionalObjectData; // 0x24 (0x8)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FVector InteractPoint; // 0x30 (0x18)
};


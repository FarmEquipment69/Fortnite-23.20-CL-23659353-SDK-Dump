// ScriptStruct /Script/FortniteGame.DecoPlacementState
// Size: 0x130
struct FDecoPlacementState
{
	struct FVector Start; // 0x0 (0x18)
	struct FVector End; // 0x18 (0x18)
	struct FVector RawLocation; // 0x30 (0x18)
	struct FVector Normal; // 0x48 (0x18)
	struct FQuat AbsoluteRotation; // 0x60 (0x20)
	struct FVector GridLocation; // 0x80 (0x18)
	struct FVector ExtraPieceLocation; // 0x98 (0x18)
	struct FVector PreviousLocation; // 0xb0 (0x18)
	struct FVector FallbackLocation; // 0xc8 (0x18)
	struct TWeakObjectPtr<class AActor> LastHitActor; // 0xe0 (0x8)
	struct TWeakObjectPtr<class ABuildingSMActor> CurrentBuildingActorAttachment; // 0xe8 (0x8)
	struct FVector CreateBuildingLocation; // 0xf0 (0x18)
	struct FRotator CreateBuildingRotation; // 0x108 (0x18)
	struct TEnumAsByte<EFortDecoPlacementQueryResults> CanPlaceState; // 0x120 (0x1)
	unsigned char padding_121[0xf]; // 0x121 (0xf)
};


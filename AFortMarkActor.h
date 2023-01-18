// Class /Script/FortniteGame.FortMarkActor
// Size: 0x3a0
class AFortMarkActor : public AActor
{
	struct TWeakObjectPtr<class AFortPlayerStateZone> OwningPlayer; // 0x288 (0x8)
	struct FString MarkString; // 0x290 (0x10)
	struct FText PreapprovedMarkString; // 0x2a0 (0x18)
	bool bFinishedEditing; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x7]; // 0x2b9 (0x7) 
	class AActor* AttachedToActor; // 0x2c0 (0x8)
	struct FVector AttachmentOffset; // 0x2c8 (0x18)
	struct FSlateBrush MiniMapIconBrush; // 0x2e0 (0xc0)

	/* Functions */

	// Function /Script/FortniteGame.FortMarkActor.OnRep_AttachedToActor (Underlying native function: OnRep_AttachedToActor 0x896fc28)
	void OnRepAttachedToActor(); // (Final | Native | Public)
};


// Class /Script/FortniteGame.FortCreativeDeviceProp
// Size: 0xef8
class AFortCreativeDeviceProp : public ABuildingProp
{
	unsigned char unreflected_ee8[0x8]; // 0xee8 (0x8) 
	bool bSuppressPlayTimeSimpleInteractionWidgetForTouch; // 0xef0 (0x1)
	unsigned char padding_ef1[0x7]; // 0xef1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeDeviceProp.LinkIdToString (Underlying native function: LinkIdToString 0x87b54ac)
	static struct FString LinkIdToString(struct FOnlineLinkId& LinkString); // (Final | Native | Static | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.CreateLinkIdWithVersion (Underlying native function: CreateLinkIdWithVersion 0x87b14c4)
	static struct FOnlineLinkId CreateLinkIdWithVersion(struct FString& LinkString, int& Version); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.CreateLinkId (Underlying native function: CreateLinkId 0x87b1210)
	static struct FOnlineLinkId CreateLinkId(struct FString& LinkString); // (Final | Native | Static | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.BPCanInteractNativeHelper (Underlying native function: BPCanInteractNativeHelper 0x5d34cd0)
	static bool BPCanInteractNativeHelper(class AFortPawn*& InteractingPawn, class UFortActorOptionsComponent*& ToyOptionsComponent, class UFortMinigameProgressComponent*& MinigameProgressComponent); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceProp.BP_ShouldSuppressInteractionWidget (Has no native function)
	bool BPShouldSuppressInteractionWidget(); // (Event | Protected | BlueprintEvent | Const)
};


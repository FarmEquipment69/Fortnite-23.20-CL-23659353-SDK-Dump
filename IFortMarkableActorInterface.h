// Class /Script/FortniteGame.FortMarkableActorInterface
// Size: 0x28
class IFortMarkableActorInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMarkableActorInterface.SetCanBeMarked (Underlying native function: SetCanBeMarked 0x80ad9f8)
	void SetCanBeMarked(bool& bInCanBeMarked); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMarkableActorInterface.GetTargetTagsForQuestEvent (Underlying native function: GetTargetTagsForQuestEvent 0x845e120)
	struct FGameplayTagContainer GetTargetTagsForQuestEvent(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMarkableActorInterface.GetMarkerDetailsId (Underlying native function: GetMarkerDetailsId 0x845dff4)
	struct FName GetMarkerDetailsId(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};


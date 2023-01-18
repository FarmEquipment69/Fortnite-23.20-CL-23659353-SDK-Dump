// Class /Script/FortniteGame.MeleeBlockingInterface
// Size: 0x28
class IMeleeBlockingInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.MeleeBlockingInterface.RemoveTagsToBlockWithMelee (Underlying native function: RemoveTagsToBlockWithMelee 0x80acfb4)
	void RemoveTagsToBlockWithMelee(struct FGameplayTagContainer& GameplayTagsToBlock); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.MeleeBlockingInterface.GetTagsToBlockWithMelee (Underlying native function: GetTagsToBlockWithMelee 0x80ace9c)
	struct FGameplayTagContainer GetTagsToBlockWithMelee(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.MeleeBlockingInterface.AddTagsToBlockWithMelee (Underlying native function: AddTagsToBlockWithMelee 0x80acd00)
	void AddTagsToBlockWithMelee(struct FGameplayTagContainer& GameplayTagsToBlock); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};


// Class /Script/FortniteGame.FortPlaceableActorItemDefinition
// Size: 0x480
class UFortPlaceableActorItemDefinition : public UFortItemDefinition
{
	unsigned char BasePlaceableActorClass_3a8[0x8]; // 0x3a8 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct FSlateBrush DisplayImage; // 0x3b0 (0xc0)
	struct FName ActorName; // 0x470 (0x4)
	unsigned char padding_474[0xc]; // 0x474 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaceableActorItemDefinition.GetActorName (Underlying native function: GetActorName 0x8655580)
	struct FName GetActorName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlaceableActorItemDefinition.CreatePlaceableActorItemDefinitionFromActor (Underlying native function: CreatePlaceableActorItemDefinitionFromActor 0x8654eb8)
	static class UFortPlaceableActorItemDefinition* CreatePlaceableActorItemDefinitionFromActor(struct FBuildingDuplicationData& DuplicationData, struct FSlateBrush& ImageToDisplay); // (Final | Native | Static | Public | BlueprintCallable)
};


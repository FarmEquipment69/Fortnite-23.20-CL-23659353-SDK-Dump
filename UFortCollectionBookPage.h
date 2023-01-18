// Class /Script/FortniteGame.FortCollectionBookPage
// Size: 0x78
class UFortCollectionBookPage : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct FString TemplateId; // 0x40 (0x10)
	struct FString InstanceID; // 0x50 (0x10)
	struct FName PageRowName; // 0x60 (0x4)
	enum EFortCollectionBookState State; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct TArray<struct FFortCollectionBookSectionState> SectionStates; // 0x68 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortCollectionBookPage.GetSectionState (Underlying native function: GetSectionState 0x8e7edcc)
	enum EFortCollectionBookState GetSectionState(struct FName& SectionId); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCollectionBookPage.GetPageState (Underlying native function: GetPageState 0x75cd688)
	enum EFortCollectionBookState GetPageState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


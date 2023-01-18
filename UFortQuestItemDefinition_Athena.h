// Class /Script/FortniteGame.FortQuestItemDefinition_Athena
// Size: 0x828
class UFortQuestItemDefinition_Athena : public UFortQuestItemDefinition
{
	enum EFortQuestSubtype QuestSubtype; // 0x7a0 (0x1)
	unsigned char unreflected_7a1[0x3]; // 0x7a1 (0x3) 
	int Threshold; // 0x7a4 (0x4)
	int InitialProgress; // 0x7a8 (0x4)
	unsigned char unreflected_7ac[0x4]; // 0x7ac (0x4) 
	struct TArray<struct FString> FulfillmentRewards; // 0x7b0 (0x10)
	class UFortSoundSequence* IntroSoundSequence; // 0x7c0 (0x8)
	bool bForceExpiryExport; // 0x7c8 (0x1)
	bool bAllowTransientBehavior; // 0x7c9 (0x1)
	unsigned char unreflected_7ca[0x6]; // 0x7ca (0x6) 
	struct TArray<struct TWeakObjectPtr<class UFortQuestItemDefinition>> TransientPrerequisiteQuests; // 0x7d0 (0x10)
	bool bGrantTransientQuestToSquad; // 0x7e0 (0x1)
	bool bShowIfGrantedEarly; // 0x7e1 (0x1)
	bool bTransientAutoComplete; // 0x7e2 (0x1)
	bool bAllowMultipleCompletionsPerMatch; // 0x7e3 (0x1)
	int ExpirationDuration; // 0x7e4 (0x4)
	struct TWeakObjectPtr<class UFortTandemCharacterData> TandemCharacterData; // 0x7e8 (0x28)
	struct FString CalendarEventTag; // 0x810 (0x10)
	unsigned char bIsShared; // 0x820 (0x1)
	unsigned char padding_821[0x7]; // 0x821 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortQuestItemDefinition_Athena.GetTandemCharacterData (Underlying native function: GetTandemCharacterData 0x8e1bc00)
	class UFortTandemCharacterData* GetTandemCharacterData(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition_Athena.GetSoftTandemCharacterData (Underlying native function: GetSoftTandemCharacterData 0x8e1b988)
	struct TWeakObjectPtr<class UFortTandemCharacterData> GetSoftTandemCharacterData(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortQuestItemDefinition_Athena.GetQuestSubtype (Underlying native function: GetQuestSubtype 0x8e1b750)
	enum EFortQuestSubtype GetQuestSubtype(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


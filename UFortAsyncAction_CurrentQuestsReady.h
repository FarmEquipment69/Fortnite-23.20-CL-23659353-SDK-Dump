// Class /Script/FortniteGame.FortAsyncAction_CurrentQuestsReady
// Size: 0x70
class UFortAsyncAction_CurrentQuestsReady : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnCurrentQuestsReady; // 0x30 (0x10)
	class UFortQuestManager* MyQuestManager; // 0x40 (0x8)
	struct TArray<class UFortQuestItemDefinition*> MyQuestItemDefinitions; // 0x48 (0x10)
	unsigned char padding_58[0x18]; // 0x58 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_CurrentQuestsReady.CurrentQuestsReadyAsync (Underlying native function: CurrentQuestsReadyAsync 0x82650e4)
	static class UFortAsyncAction_CurrentQuestsReady* CurrentQuestsReadyAsync(class UObject*& WorldContextObject, class UFortQuestManager*& QuestManager, struct TArray<class UFortQuestItemDefinition*>& QuestItemDefinitions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};


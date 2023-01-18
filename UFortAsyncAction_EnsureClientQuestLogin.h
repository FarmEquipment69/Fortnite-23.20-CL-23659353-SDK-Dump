// Class /Script/FortniteGame.FortAsyncAction_EnsureClientQuestLogin
// Size: 0x58
class UFortAsyncAction_EnsureClientQuestLogin : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40 (0x10)
	class UFortQuestManager* QuestManager; // 0x50 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAsyncAction_EnsureClientQuestLogin.SendEnsureClientQuestLogin (Underlying native function: SendEnsureClientQuestLogin 0x27a924c)
	static class UFortAsyncAction_EnsureClientQuestLogin* SendEnsureClientQuestLogin(class UFortQuestManager*& QuestManager); // (Final | Native | Static | Public | BlueprintCallable)
};


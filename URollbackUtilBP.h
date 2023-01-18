// Class /Script/FortniteGame.RollbackUtilBP
// Size: 0x28
class URollbackUtilBP : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.RollbackUtilBP.GetRollbacksByJiraTicket (Underlying native function: GetRollbacksByJiraTicket 0x8e5ea58)
	static struct TArray<struct FCvarRollback> GetRollbacksByJiraTicket(struct FString& JiraTicket); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.RollbackUtilBP.GetRollbacksByCategories (Underlying native function: GetRollbacksByCategories 0x8e5e8d0)
	static struct TArray<struct FCvarRollback> GetRollbacksByCategories(struct FString& category); // (Final | Native | Static | Private | BlueprintCallable)
};


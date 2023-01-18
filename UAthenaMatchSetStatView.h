// Class /Script/FortniteUI.AthenaMatchSetStatView
// Size: 0x140
class UAthenaMatchSetStatView : public UAthenaMatchStatView
{
	class UAthenaSeasonStats* OwningSeason; // 0x120 (0x8)
	struct FName PlaylistId; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct TArray<class UAthenaMatchStatView*> BestMatches; // 0x130 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMatchSetStatView.GetOwningSeason (Underlying native function: GetOwningSeason 0xa5b91a0)
	class UAthenaSeasonStats* GetOwningSeason(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaMatchSetStatView.GetBestMatchViews (Underlying native function: GetBestMatchViews 0xa5b89e8)
	struct TArray<class UAthenaMatchStatView*> GetBestMatchViews(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};


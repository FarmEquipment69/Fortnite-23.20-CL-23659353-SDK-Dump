// Class /Script/FortniteUI.AthenaProfileStatContext
// Size: 0x48
class UAthenaProfileStatContext : public UBlueprintContextBase
{
	struct FMulticastInlineDelegate OnStatsProfileLoaded; // 0x30 (0x10)
	unsigned char padding_40[0x8]; // 0x40 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.AthenaProfileStatContext.OnAthenaStatsProfileLoaded__DelegateSignature (Has no native function)
	void OnAthenaStatsProfileLoadedDelegateSignature(class UFortMcpProfileAthenaStats*& StatProfile); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaProfileStatContext.CreateMatchViews (Underlying native function: CreateMatchViews 0xa5b7d18)
	struct TArray<class UAthenaMatchStatView*> CreateMatchViews(struct TArray<struct FAthenaMatchStats>& InRecentMatches); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatContext.CreateMatchStatView (Underlying native function: CreateMatchStatView 0xa5b7ae4)
	class UAthenaMatchSetStatView* CreateMatchStatView(class UAthenaSeasonStats*& StatSet, struct FName& Bucket); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatContext.CreateCurrentMatchStatView (Underlying native function: CreateCurrentMatchStatView 0xa5b7a60)
	class UAthenaMatchStatView* CreateCurrentMatchStatView(); // (Final | Native | Public | BlueprintCallable)
};


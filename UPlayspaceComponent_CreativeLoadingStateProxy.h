// Class /Script/FortniteGame.PlayspaceComponent_CreativeLoadingStateProxy
// Size: 0x118
class UPlayspaceComponent_CreativeLoadingStateProxy : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x8]; // 0xf8 (0x8) 
	enum ESpatialLoadingState SpatialLoadingState; // 0x100 (0x1)
	enum ESpatialLoadingState CurrentLockedLoadingState; // 0x101 (0x1)
	bool bNeverAllowSaving; // 0x102 (0x1)
	unsigned char unreflected_103[0x5]; // 0x103 (0x5) 
	struct TArray<enum ESpatialLoadingState> LockedLoadingStates; // 0x108 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeLoadingStateProxy.OnRep_SpatialLoadingState (Underlying native function: OnRep_SpatialLoadingState 0x8ddebfc)
	void OnRepSpatialLoadingState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PlayspaceComponent_CreativeLoadingStateProxy.OnRep_CurrentLockedLoadingState (Underlying native function: OnRep_CurrentLockedLoadingState 0x8ddebfc)
	void OnRepCurrentLockedLoadingState(); // (Final | Native | Protected)
};


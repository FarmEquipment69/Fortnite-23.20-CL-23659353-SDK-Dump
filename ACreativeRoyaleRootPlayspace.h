// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
// Size: 0x6a8
class ACreativeRoyaleRootPlayspace : public AFortPlayspace
{
	unsigned char unreflected_670[0x18]; // 0x670 (0x18) 
	class AFortPlayerControllerAthena* EditorIslandOwnerPlayerController; // 0x688 (0x8)
	unsigned char unreflected_690[0x8]; // 0x690 (0x8) 
	bool bHasPlotLoaded; // 0x698 (0x1)
	unsigned char padding_699[0xf]; // 0x699 (0xf)

	/* Functions */

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts (Underlying native function: TeleportPlayersToPlayerStarts 0x26daa0c)
	void TeleportPlayersToPlayerStarts(); // (Final | Native | Protected)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnRep_bHasPlotLoaded (Underlying native function: OnRep_bHasPlotLoaded 0x7306b00)
	void OnRepbHasPlotLoaded(); // (Final | Native | Private)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete (Underlying native function: OnPlotLoadComplete 0x7306ad0)
	void OnPlotLoadComplete(); // (Final | Native | Private)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland (Underlying native function: Cheat_LoadEditorIsland 0x26daa0c)
	void CheatLoadEditorIsland(); // (Final | Native | Protected)

	// Function /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.BuildDataRegistryResolverScope_Implementation (Underlying native function: BuildDataRegistryResolverScope_Implementation 0x7306258)
	bool BuildDataRegistryResolverScopeImplementation(struct TArray<struct FName>& InOutResolverScopes, int& InOutPriority); // (Native | Public | HasOutParms | Const)
};


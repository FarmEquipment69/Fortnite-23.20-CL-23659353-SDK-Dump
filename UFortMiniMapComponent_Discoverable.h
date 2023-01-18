// Class /Script/FortniteGame.FortMiniMapComponent_Discoverable
// Size: 0x208
class UFortMiniMapComponent_Discoverable : public UFortMiniMapComponent
{
	struct FMulticastInlineDelegate OnPlayerVisibilityChanged; // 0x1c8 (0x10)
	enum EMiniMapComponentDiscoverableVisibility DefaultVisibility; // 0x1d8 (0x1)
	bool bDefaultVisibilityCanChangeAtRuntime; // 0x1d9 (0x1)
	unsigned char unreflected_1da[0x6]; // 0x1da (0x6) 
	struct FVector2D NotDiscoveredIconScale; // 0x1e0 (0x10)
	class UTexture2D* NotDiscoveredIcon; // 0x1f0 (0x8)
	unsigned char padding_1f8[0x10]; // 0x1f8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.SetVisibilityForPlayer (Underlying native function: SetVisibilityForPlayer 0x738c2ac)
	void SetVisibilityForPlayer(class AFortPlayerController*& PlayerController, enum EMiniMapComponentDiscoverableVisibility& Visibility); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.SetMiniMapNotDiscoveredIconScale (Underlying native function: SetMiniMapNotDiscoveredIconScale 0x856eb10)
	void SetMiniMapNotDiscoveredIconScale(struct FVector2D& IconScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.SetMiniMapDiscoveredIconScale (Underlying native function: SetMiniMapDiscoveredIconScale 0x856ea84)
	void SetMiniMapDiscoveredIconScale(struct FVector2D& IconScale); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.SetMiniMapDiscoveredIcon (Underlying native function: SetMiniMapDiscoveredIcon 0x856ea00)
	void SetMiniMapDiscoveredIcon(class UObject*& MiniMapIcon); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.SetDefaultVisibility (Underlying native function: SetDefaultVisibility 0x856e95c)
	void SetDefaultVisibility(enum EMiniMapComponentDiscoverableVisibility& InVisibility, bool& bClearAllPlayerVisibilityOverrides); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.OnRep_NotDiscoveredIconScale (Underlying native function: OnRep_NotDiscoveredIconScale 0x856e810)
	void OnRepNotDiscoveredIconScale(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.OnRep_NotDiscoveredIcon (Underlying native function: OnRep_NotDiscoveredIcon 0x856e810)
	void OnRepNotDiscoveredIcon(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.GetVisibilityForPlayer (Underlying native function: GetVisibilityForPlayer 0x856d0f0)
	enum EMiniMapComponentDiscoverableVisibility GetVisibilityForPlayer(class AFortPlayerController*& PlayerController); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.GetPlayersSetVisibility (Underlying native function: GetPlayersSetVisibility 0x856d02c)
	enum EMiniMapComponentDiscoverableVisibility GetPlayersSetVisibility(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.GetDefaultVisibilityCanChangeAtRuntime (Underlying native function: GetDefaultVisibilityCanChangeAtRuntime 0x856d014)
	bool GetDefaultVisibilityCanChangeAtRuntime(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.GetDefaultVisibility (Underlying native function: GetDefaultVisibility 0x856cffc)
	enum EMiniMapComponentDiscoverableVisibility GetDefaultVisibility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMiniMapComponent_Discoverable.DisableDefaultVisibilityCanChangeAtRuntime (Underlying native function: DisableDefaultVisibilityCanChangeAtRuntime 0x856ce1c)
	void DisableDefaultVisibilityCanChangeAtRuntime(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};


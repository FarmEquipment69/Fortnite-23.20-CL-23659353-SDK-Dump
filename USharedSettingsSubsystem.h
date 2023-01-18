// Class /Script/FortniteGame.SharedSettingsSubsystem
// Size: 0x80
class USharedSettingsSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_80[0x80]; 

	/* Functions */

	// Function /Script/FortniteGame.SharedSettingsSubsystem.RemoveCachedSharedSettingsData (Underlying native function: RemoveCachedSharedSettingsData 0x8e60098)
	bool RemoveCachedSharedSettingsData(class UObject*& ContextObject); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SharedSettingsSubsystem.GetForObject (Underlying native function: GetForObject 0x8e5e71c)
	static class USharedSettingsSubsystem* GetForObject(class UObject*& Object, bool& bOnlyGameWorlds); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.SharedSettingsSubsystem.GetCachedResolverScopesForObject (Underlying native function: GetCachedResolverScopesForObject 0x8e5e30c)
	bool GetCachedResolverScopesForObject(struct TArray<struct FName>& OutResolverScopes, int& OutPriority, bool& bOutBuildSuccess, class UObject*& ContextObject); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.SharedSettingsSubsystem.AddOrUpdateCachedSharedSettingsData (Underlying native function: AddOrUpdateCachedSharedSettingsData 0x8e5d6f0)
	void AddOrUpdateCachedSharedSettingsData(class UObject*& ContextObject); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};


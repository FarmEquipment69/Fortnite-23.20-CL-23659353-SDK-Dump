// Class /Script/FortniteGame.FortDataRegistryResolverScopeInterface
// Size: 0x28
class IFortDataRegistryResolverScopeInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortDataRegistryResolverScopeInterface.GetCacheContextOverride (Underlying native function: GetCacheContextOverride 0x23ba54c)
	class UObject* GetCacheContextOverride(); // (0x00000002 | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortDataRegistryResolverScopeInterface.BuildDataRegistryResolverScope (Underlying native function: BuildDataRegistryResolverScope 0x17eaa6c)
	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int& InOutPriority); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};


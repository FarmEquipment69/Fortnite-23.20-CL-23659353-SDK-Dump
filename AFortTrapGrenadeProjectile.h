// Class /Script/FortniteGame.FortTrapGrenadeProjectile
// Size: 0xa38
class AFortTrapGrenadeProjectile : public AFortProjectileBase
{
	class AFortDecoTool_ContextTrap* ProjectileDecoTool; // 0xa20 (0x8)
	class AFortProjectileDecoHelper* ProjectileDecoHelper; // 0xa28 (0x8)
	class UFortContextTrapItemDefinition* TrapDefinition; // 0xa30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTrapGrenadeProjectile.OnRep_DecoTool (Underlying native function: OnRep_DecoTool 0x80ab500)
	void OnRepDecoTool(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortTrapGrenadeProjectile.InitializeProjectileDecoHelperAndTool (Underlying native function: InitializeProjectileDecoHelperAndTool 0x80ab458)
	void InitializeProjectileDecoHelperAndTool(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTrapGrenadeProjectile.GetTrapDefinition (Underlying native function: GetTrapDefinition 0x80ab0d8)
	class UFortContextTrapItemDefinition* GetTrapDefinition(); // (Final | Native | Public | BlueprintCallable)
};


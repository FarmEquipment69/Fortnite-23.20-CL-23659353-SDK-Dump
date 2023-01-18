// Class /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent
// Size: 0xd8
class URockVehicleAnalyticsComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FRockVehicleAnalyticsSession CurrentSession; // 0xa8 (0x28)
	class ARockVehicle* Vehicle; // 0xd0 (0x8)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicStart (Underlying native function: OnSupersonicStart 0x7544670)
	void OnSupersonicStart(class UActorComponent*& InComp, bool& bInReset); // (Final | Native | Private)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnSupersonicEnd (Underlying native function: OnSupersonicEnd 0x7544600)
	void OnSupersonicEnd(class UActorComponent*& InComp); // (Final | Native | Private)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnExitedSeat (Underlying native function: OnPawnExitedSeat 0x7544418)
	void OnPawnExitedSeat(struct TScriptInterface<class IFortVehicleInterface>& InVehicle, class AFortPawn*& InPlayerPawn, int& InSeatIndex); // (Final | Native | Private | HasOutParms)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnPawnEnteredSeat (Underlying native function: OnPawnEnteredSeat 0x7544300)
	void OnPawnEnteredSeat(struct TScriptInterface<class IFortVehicleInterface>& InVehicle, class AFortPawn*& InPlayerPawn, int& InSeatIndex); // (Final | Native | Private | HasOutParms)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnJumped (Underlying native function: OnJumped 0x7544248)
	void OnJumped(class UActorComponent*& InComp, bool& bInReset); // (Final | Native | Private)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDoubleJumped (Underlying native function: OnDoubleJumped 0x7544190)
	void OnDoubleJumped(class UActorComponent*& InComp, bool& bInReset); // (Final | Native | Private)

	// Function /Script/RockVehicleRuntime.RockVehicleAnalyticsComponent.OnDodged (Underlying native function: OnDodged 0x75440d8)
	void OnDodged(class UActorComponent*& InComp, bool& bInReset); // (Final | Native | Private)
};


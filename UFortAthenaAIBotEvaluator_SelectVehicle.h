// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_SelectVehicle
// Size: 0x310
class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement
{
	struct FName VehicleDestinationKeyName; // 0x230 (0x4)
	struct FName SelectVehicleMovementStateKeyName; // 0x234 (0x4)
	struct FName SelectVehicleStatusKeyName; // 0x238 (0x4)
	struct FName SelectedVehicleKeyName; // 0x23c (0x4)
	unsigned char unreflected_240[0x8]; // 0x240 (0x8) 
	struct FScalableFloat Enabled; // 0x248 (0x28)
	float VehicleSearchRadius; // 0x270 (0x4)
	bool bCanEnterOnlyWithHisConverter; // 0x274 (0x1)
	bool bCanEnterAsDriver; // 0x275 (0x1)
	bool bCanEnterVehiclesInWater; // 0x276 (0x1)
	bool bCanEnterOutOfFuelVehicles; // 0x277 (0x1)
	bool bCanEnterWithPlayerDriver; // 0x278 (0x1)
	bool bCanEnterOnlyMatchingPatrols; // 0x279 (0x1)
	unsigned char unreflected_27a[0x6]; // 0x27a (0x6) 
	struct FGameplayTagQuery VehiclesFilterTagQuery; // 0x280 (0x48)
	struct FGameplayTagQuery SeatsFilterTagQuery; // 0x2c8 (0x48)
};


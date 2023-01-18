// ScriptStruct /Script/RockVehicleRuntime.RockVehicleState
// Size: 0xe0
struct FRockVehicleState
{
	struct FReplicatedPhysicsPawnState RigidBodyState; // 0x0 (0x80)
	struct FFortAthenaVehicleInputState PrevDriverInput; // 0x80 (0x40)
	bool bWheelsOnGround; // 0xc0 (0x1)
	bool bAnyWheelsOnGround; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x6]; // 0xc2 (0x6) 
	struct FVector AverageSpringNormal; // 0xc8 (0x18)
};


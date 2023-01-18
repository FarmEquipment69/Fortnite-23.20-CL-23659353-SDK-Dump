// ScriptStruct /Script/FortniteGame.FortReplicatedVehicleOverrideData
// Size: 0x28
struct FFortReplicatedVehicleOverrideData : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortAthenaVehicle* Vehicle; // 0x10 (0x8)
	struct FFortVehicleOverrideData OverrideData; // 0x18 (0xc)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};


// ScriptStruct /Script/FortniteAI.FortAIEncounterRift
// Size: 0x30
struct FFortAIEncounterRift
{
	int QueryID; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector RiftLocation; // 0x8 (0x18)
	class ABuildingRift* RiftActor; // 0x20 (0x8)
	struct FFortRiftReservationHandle RiftReservationHandle; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};


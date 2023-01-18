// ScriptStruct /Script/FortniteGame.BarrierTeamState
// Size: 0x28
struct FBarrierTeamState
{
	unsigned char TeamNum; // 0x0 (0x1)
	enum EBarrierFoodTeam FoodTeam; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class AAthenaBarrierFlag* ObjectiveFlag; // 0x8 (0x8)
	class AAthenaBarrierObjective* ObjectiveObject; // 0x10 (0x8)
	bool bRespawnEnabled; // 0x18 (0x1)
	unsigned char padding_19[0xf]; // 0x19 (0xf)
};


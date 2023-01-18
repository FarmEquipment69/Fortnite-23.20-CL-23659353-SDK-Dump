// ScriptStruct /Script/FortniteAI.AthenaAIServiceGroupInfo
// Size: 0x20
struct FAthenaAIServiceGroupInfo
{
	int GroupId; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UFortPawnComponent_AIGroup* GroupLeader; // 0x8 (0x8)
	struct TArray<class UFortPawnComponent_AIGroup*> GroupMembers; // 0x10 (0x10)
};


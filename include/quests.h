#ifndef GUARD_QUESTS_H
#define GUARD_QUESTS_H

//#include constants/quests.h //included in global.h

#define SORT_DEFAULT    0
#define SORT_INACTIVE   1
#define SORT_ACTIVE     2
#define SORT_REWARD     3
#define SORT_DONE       4

#define SORT_DEFAULT_AZ     10
#define SORT_INACTIVE_AZ    11
#define SORT_ACTIVE_AZ      12
#define SORT_REWARD_AZ      13
#define SORT_DONE_AZ        14

#define SORT_SUBQUEST       100

#define INCREMENT   1
#define ALPHA       2
#define SUB         3

#define OBJECT      1
#define ITEM        2
#define PKMN        3

#define MAX_QUEST_STATES 50
/* Defines how many states a complex quest can have */

struct SubQuest
{
    const u8 id;
    const u8 *name;
    const u8 *desc;
    const u8 *map;
    const u16 sprite;
    const u8 spritetype;
    const u8 *type;
};

struct SideQuest
{
    const u8 *name;
    const u8 *desc[MAX_QUEST_STATES];
    const u8 *donedesc;
    const u8 *map[MAX_QUEST_STATES];
    const u16 sprite[MAX_QUEST_STATES];
    const u8 spritetype[MAX_QUEST_STATES];
    const struct SubQuest *subquests;
    const u8 numSubquests;
    const u16 questVariable;
};

enum QuestCases
{
    FLAG_GET_UNLOCKED,          // check if quest is unlocked
    FLAG_GET_INACTIVE,          // check if quest is unlocked but has no other state
    FLAG_GET_ACTIVE,            // check if quest is active
    FLAG_GET_REWARD,            // check if quest is ready for reward
    FLAG_GET_COMPLETED,         // check if quest is completed
    FLAG_GET_FAVORITE,          // check if quest is favorited
    FLAG_SET_UNLOCKED,          // mark quest as unlocked
    FLAG_SET_INACTIVE,          // mark quest as inactive
    FLAG_SET_ACTIVE,            // mark quest as active
    FLAG_SET_REWARD,            // mark quest ready for reward
    FLAG_SET_COMPLETED,         // mark completed quest
    FLAG_SET_FAVORITE,          // mark quest as favorite
    FLAG_REMOVE_INACTIVE,       // remove inactive flag from quest
    FLAG_REMOVE_ACTIVE,         // remove active flag from quest
    FLAG_REMOVE_REWARD,         // remove reward flag from quest
    FLAG_REMOVE_FAVORITE,       // remove favorite flag from quest
};

// functions
void QuestMenu_Init(u8 a0, MainCallback callback);
u8 QuestMenu_GetSetSubquestState(u8 quest, u8 caseId, u8 childQuest);
u8 QuestMenu_GetSetQuestState(u8 quest, u8 caseId);
void Task_QuestMenu_OpenFromStartMenu(u8);
void CB2_OpenQuestMenu(void);
void QuestMenu_CopyQuestName(u8 *dst, u8 questId);
void QuestMenu_CopySubquestName(u8 *dst, u8 parentId, u8 childId);
void QuestMenu_ResetMenuSaveData(void);
void ResetQuestIconOnObject(struct ObjectEvent*);
void HandleQuestIconForSingleObjectEvent(struct ObjectEvent*, u32);
void RefreshQuestIcons(void);

#endif // GUARD_QUESTS_H
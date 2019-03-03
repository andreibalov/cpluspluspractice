#pragma once


class ListNode
{
public:
    ListNode(int item, class ListNode* next = nullptr)
        : m_item(item), m_next(next)
    {

    }

    int m_item;
    ListNode* m_next;
};

ListNode* reverse(ListNode* head)
{
    if (!head)
    {
        return head;
    }

    ListNode* current = head;
    ListNode* prev = nullptr;
    while (current)
    {
        auto tmpeNext = current->m_next;
        current->m_next = prev;
        prev = current;
        if (!tmpeNext)
            return current;

        current = tmpeNext;
    }
}

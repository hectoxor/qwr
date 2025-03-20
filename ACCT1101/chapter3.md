# Chapter 3: Operating Decisions

## Revenue Recognition
- Revenue recognized when earned, regardless of when cash is received
- Must be measurable and collection reasonably assured

## Revenue Recognition Examples

### Product Sale
```
May 15: Customer orders $1,000 of goods
May 20: Goods shipped to customer, invoice sent
May 30: Payment received

Recognition point: May 20 (when shipped)
Dr. Accounts Receivable      1,000
    Cr. Sales Revenue             1,000
```

### Service Contract
```
Jan 1: Receive $12,000 for 12-month service contract
Each month: Recognize 1/12 of revenue

Dr. Cash                     12,000
    Cr. Unearned Revenue          12,000

Monthly journal entry:
Dr. Unearned Revenue          1,000
    Cr. Service Revenue           1,000
```

## Expense Recognition (Matching Principle)
- Expenses matched with related revenues
- Expenses recognized when incurred, not necessarily when paid

## Matching Principle Illustrated

### Salesperson Commission
```
December sales: $100,000
Commission rate: 5%
Commissions paid in January

December entry (matching):
Dr. Commission Expense       5,000
    Cr. Commissions Payable       5,000
```

## Accrual vs. Cash Basis
- **Accrual**: Records transactions when they occur economically
- **Cash**: Records only when cash changes hands
- GAAP requires accrual accounting for most entities

## Accrual vs. Cash Basis Comparison

| Transaction | Accrual Basis | Cash Basis |
|-------------|---------------|------------|
| Services performed but not yet billed | Record revenue | No entry |
| Advance payment received for future service | Record as liability | Record as revenue |
| Supplies purchased on account | Record expense and liability | No entry |
| Salary expense incurred but not paid | Record expense and liability | No entry |

## Operating Cycle
- Purchase inventory → Sell goods → Collect receivables
- Influences working capital management

## Operating Cycle Visualization

```
[Cash] → [Inventory] → [Accounts Receivable] → [Cash]
   ↑                                              |
   |                                              |
   └──────────────────────────────────────────────┘
```

### Timing Example
- Purchase inventory (Day 1): $5,000
- Sell on account (Day 30): $8,000
- Collect payment (Day 60): $8,000
- Operating cycle: 60 days

## Practice Problems and Solutions

### Problem 1: Revenue Recognition Timing

**Problem:**  
SaaS Solutions Inc. offers software subscriptions. Determine when to recognize revenue in each scenario:

1. On January 1, 2023, a client pays $24,000 for a 12-month software subscription.
2. On March 15, 2023, SaaS performs custom implementation services worth $8,000. Payment is due in 30 days.
3. On April 1, 2023, SaaS signs a 2-year contract for $48,000, collecting $12,000 upfront and the remainder in quarterly installments.

**Solution:**

1. Subscription Payment:
   - Recognize $2,000 revenue each month ($24,000 ÷ 12)
   - Initial entry:
     ```
     Dr. Cash                24,000
         Cr. Unearned Revenue      24,000
     ```
   - Monthly entry:
     ```
     Dr. Unearned Revenue     2,000
         Cr. Subscription Revenue   2,000
     ```

2. Implementation Services:
   - Recognize $8,000 immediately on March 15 when service is performed
   - Entry:
     ```
     Dr. Accounts Receivable  8,000
         Cr. Service Revenue        8,000
     ```

3. Two-Year Contract:
   - Recognize $2,000 revenue each month ($48,000 ÷ 24)
   - Initial entry:
     ```
     Dr. Cash                12,000
     Dr. Contracts Receivable 36,000
         Cr. Unearned Revenue      48,000
     ```
   - Monthly entry:
     ```
     Dr. Unearned Revenue     2,000
         Cr. Subscription Revenue   2,000
     ```

### Problem 2: Matching Principle Application

**Problem:**  
RetailMax has the following scenarios at year-end (December 31):
1. Sales staff earned $15,000 in commissions on December sales, to be paid on January 15.
2. The company used $3,000 of electricity in December, but the bill will arrive in January.
3. The company prepaid $12,000 for 12 months of insurance on October 1.
4. The company has products worth $5,000 delivered to customers on December 30, but not yet invoiced.

Prepare appropriate journal entries applying the matching principle.

**Solution:**

1. December Sales Commissions:
   ```
   Dr. Commission Expense    15,000
       Cr. Commissions Payable      15,000
   (To record commissions earned in December)
   ```

2. December Utilities:
   ```
   Dr. Utilities Expense      3,000
       Cr. Utilities Payable         3,000
   (To record December utilities expense)
   ```

3. Insurance Prepayment:
   ```
   Dr. Insurance Expense      3,000
       Cr. Prepaid Insurance         3,000
   (To record 3 months of insurance: Oct-Dec)
   ```

4. December Product Delivery:
   ```
   Dr. Accounts Receivable    5,000
       Cr. Sales Revenue            5,000
   (To record revenue for products delivered)
   
   Dr. Cost of Goods Sold     3,000
       Cr. Inventory                3,000
   (Assuming COGS is 60% of sales price)
   ```

### Problem 3: Accrual vs. Cash Basis Comparison

**Problem:**  
ConsultingFirm LLC has the following transactions in December 2023:
1. Performed $50,000 in consulting services, receiving $30,000 in cash with $20,000 to be collected in January.
2. Paid $8,000 for December office rent.
3. Received $15,000 for services to be performed in January.
4. Incurred $12,000 in employee salaries, to be paid on January 5.
5. Purchased $3,000 in office supplies, using only $1,800 in December.

Prepare income statements under both accrual and cash basis for December.

**Solution:**

**Accrual Basis Income Statement:**
```
ConsultingFirm LLC
Income Statement (Accrual Basis)
For the Month Ended December 31, 2023

Consulting Revenue                      $50,000
  
Expenses:
  Rent Expense                           $8,000
  Salary Expense                         12,000
  Supplies Expense                        1,800
Total Expenses                          $21,800

Net Income                              $28,200
```

**Cash Basis Income Statement:**
```
ConsultingFirm LLC
Income Statement (Cash Basis)
For the Month Ended December 31, 2023

Cash Received from Clients             $45,000
  ($30,000 current + $15,000 for future services)
  
Cash Paid for Expenses:
  Rent                                   $8,000
  Supplies                                3,000
Total Cash Paid                         $11,000

Net Cash Income                         $34,000
```

**Key Differences:**
- Revenue: $50,000 (accrual) vs. $45,000 (cash)
- Expenses: $21,800 (accrual) vs. $11,000 (cash)
- Net Income: $28,200 (accrual) vs. $34,000 (cash)
- Accrual basis presents a more accurate picture of economic activity in December

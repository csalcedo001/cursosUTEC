# Ranked Retrieval

## Jaccard coefficient

```
jaccard(A, B) = |intersection(A, B)| / |union(A, B)|
```

## Term Frequency (tf)

Let t be a term and d a document. The term frequency is defined as the number of times t appears in _d_.

A term with high frequency has higher relevance.

## Document Frequency (df)

df is the amount of documents in which t appears.

Denotes rarity for informativity.

## idf weight

```
idf = log10(N/df)
```

## td-idfweighting

```
w = log(1 + tf) x log(N / df)
```

## Proximity

* Euclidean distance: May show problems.
* Angular distance: Better solution. Cosine distance

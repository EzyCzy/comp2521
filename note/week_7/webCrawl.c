wevCrawl(startingUrl, maxPagesToVisit):

  create visited set
  add startingUrl to visited set
  enqueue startingUrl into Q

  numPagesVisited = 0
  while Q is not empty and numPagesVisited < maxPagesToVisit:
    currPage = dequeue from Q

    visit currPage
    numPagesVisited = numPagesVisited + 1

    for each hyperlink on currPage:
      if hyperlink not in visited set:
        add hyperlink to visited set
        enqueue hyperlink into Q

    

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    query_score=student_marks[query_name]
    avg=0
    for i in query_score:
        avg+=i
    print("{0:.2f}".format(avg/3))
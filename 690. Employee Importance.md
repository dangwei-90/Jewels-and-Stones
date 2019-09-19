/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/

void employeevalue(vector<Employee*> employees, int id, int &val)
{
    Employee *empTemp;
    for(auto au : employees)
    {
        if(au->id == id)
        {
            empTemp = au;
        }
    }
    
    val = val + empTemp->importance;
    for(int n = 0; n < empTemp->subordinates.size(); n++)
    {
        employeevalue(employees, empTemp->subordinates[n], val);
    }
}

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int nval = 0;
        employeevalue(employees, id, nval);
        return nval;
    }
};

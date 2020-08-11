class Area:
    area_code = 0
    name = ""
    active_cases = 0
    __test_onprogress = 0
    __patients_recovered = 0

    def __init__(self,code,n):
        self.area_code = code
        self.name = n
    
    def update(self,new_case,rec,tests):
        #print("yo",new_case,rec,tests,self.active_cases)
        self.active_cases = self.active_cases + new_case - rec
        #print("yo",new_case,rec,tests,self.active_cases)
        self.__patients_recovered += rec
        self.__test_onprogress = tests
    
    def count_of_cases(self):
        return self.active_cases
    
    def code(self):
        return self.area_code

    def area_name(self):
        return self.name


class Hospitals:
    hospital_code = 0
    __name = ""
    area_code = 0
    __total_beds = 0
    available_beds = 0


    def __init__(self,h_code,name,a_code,t_beds,a_beds):
        self.hospital_code = h_code
        self.__name = name
        self.area_code = a_code
        self.__total_beds = t_beds
        self.available_beds = a_beds

    def patient_admit(self,x):
        self.available_beds -= x
    
    def beds_remaining(self):
            return self.available_beds
    
    def code(self):
        return self.area_code
    
    def checkups(self):
        for i in area:
            #print(i.code(),self.area_code)
            if i.code() == self.area_code:
                i.update(1,0,0)

    


class People:
    aadhar = 0
    name = ""
    __address = ""
    area_code = 0
    location_history = []
    covid_status = 0
    zones = []
    flag = -1

    def __init__(self,aadhar,n,addr,a_code,status):
       self.aadhar = aadhar
       self.name = n
       self.__address = addr
       self.area_code = a_code
       self.covid_status = 0
    
    def req_checkups(self):
           for i in hosp:
               if i.code() == self.area_code:
                   #print("hi")
                   i.checkups()
    
    def print_zones(self):
        self.zones = [[],[],[]]
        for i in area:
            if i.count_of_cases() < 100:
                self.zones[2].append(i)
            elif i.count_of_cases() < 500:
                self.zones[1].append(i)
            else:
                self.zones[0].append(i)

        print("Red Zones are :")
        for i in self.zones[0]:
            print(i.area_name())
        print("\nOrange Zones are :")
        for i in self.zones[1]:
            print(i.area_name())
        print("\nGreen Zones are :")
        for i in self.zones[2]:
            print(i.area_name())

    
if __name__ == "__main__":
    area_names = ["four_roads","five_roads","old_busstand","new_bustand","asthampatti"]
    area = []
    hosp_names = ["Abc","Jipmer","Srm","GH"]
    area_code_of_hosp = [0,1,2,3]
    hosp = []


    for i in range(len(area_names)):
        area.append(Area(i,area_names[i]))
    
    
    for i in range(3,5):
        area[i].update(1000,0,0)

    for i in range(len(hosp_names)):
        hosp.append(Hospitals(i,hosp_names[i],i,500,500))
    

    for i in area:
        print(i.area_name(),i.count_of_cases())
    
    print()

    print("Gowtham's view:")
    p1 = People(12345,"Gowtham","kitchiplayam,salem",0,0)

    p1.req_checkups()
    p1.print_zones()

    print()
    p2 = People(65894,"Ram","four_roads,salem",0,0)

    print("Ram's view :")
    p2.req_checkups()
    p2.print_zones()

    print()
    for i in area:
        print(i.area_name(),i.count_of_cases())

from datetime import *

date = datetime.today() + timedelta(hours=9)
print(date.strftime('%Y-%m-%d'))